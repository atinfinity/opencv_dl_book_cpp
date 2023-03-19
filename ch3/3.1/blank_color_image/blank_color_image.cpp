#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

int main(int argc, char* argv[])
{
    const uint32_t width = 200;
    const uint32_t height = 100;
    const cv::Scalar value = cv::Scalar(0, 0, 255);

    // width=200、height=100、3チャンネルとも画素値0で埋めたカラー画像を生成
    cv::Mat img1 = cv::Mat::zeros(cv::Size(width, height), CV_8UC3);

    // width=200、height=100、画素値(B=0, G=0, R=255)で埋めたカラー画像を生成
    cv::Mat img2 = cv::Mat(cv::Size(width, height), CV_8UC3, value);

    // 画像をウィンドウ表示する
    cv::imshow("img1", img1);
    cv::imshow("img2", img2);
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}
