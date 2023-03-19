#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

int main(int argc, char* argv[])
{
    const uint32_t width = 200;
    const uint32_t height = 100;
    const uint8_t value = 128;

    // width=200、height=100、画素値0で埋めたグレースケール画像を生成
    cv::Mat img1 = cv::Mat::zeros(cv::Size(width, height), CV_8UC1);

    // width=200、height=100、画素値128で埋めたグレースケール画像を生成
    cv::Mat img2 = cv::Mat(cv::Size(width, height), CV_8UC1, cv::Scalar(value));

    // 画像をウィンドウ表示する
    cv::imshow("img1", img1);
    cv::imshow("img2", img2);
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}
