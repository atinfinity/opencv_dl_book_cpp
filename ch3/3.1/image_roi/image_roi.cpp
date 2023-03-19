#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

int main(int argc, char* argv[])
{
    // 画像ファイルをカラーで読み込み
    cv::Mat img = cv::imread("yorkie.png", cv::IMREAD_COLOR);

    // ROIを使って画像データを切り出す
    const uint32_t roi_x = 135;
    const uint32_t roi_y = 150;
    const uint32_t roi_width = 185;
    const uint32_t roi_height = 140;
    const cv::Rect roi = cv::Rect(roi_x, roi_y, roi_width, roi_height);
    cv::Mat img_roi(img, roi);

    // 画像をウィンドウ表示する
    cv::imshow("img", img);
    cv::imshow("img_roi", img_roi);
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}
