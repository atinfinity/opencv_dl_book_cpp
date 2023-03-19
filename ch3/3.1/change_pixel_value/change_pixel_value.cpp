#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>

int main(int argc, char* argv[])
{
    const uint32_t x = 200;
    const uint32_t y = 100;
    const uint32_t channel = 0;

    // 画像ファイルをカラーで読み込み
    cv::Mat img = cv::imread("yorkie.png", cv::IMREAD_COLOR);
    std::cout << "before: bgr_val(" << x << ", " << y << ") = " << img.ptr<cv::Vec3b>(y)[x] << std::endl;

    // (x, y) = (200, 100)の画素値を代入（Blue、Green、Redチャンネル）
    img.ptr<cv::Vec3b>(y)[x] = cv::Vec3b(255, 255, 255);
    std::cout << "after: bgr_val(" << x << ", " << y << ") = " << img.ptr<cv::Vec3b>(y)[x] << std::endl;

    std::cout << "before:  b_val(" << x << ", " << y << ") = " << +(img.ptr<cv::Vec3b>(y)[x][channel]) << std::endl;

    // 0番目のチャンネル（＝Blueチャンネル）の(x, y) = (200, 100)の画素値を代入
    img.ptr<cv::Vec3b>(y)[x][channel] = 0;
    std::cout << "after:  b_val(" << x << ", " << y << ") = " << +(img.ptr<cv::Vec3b>(y)[x][channel]) << std::endl;

    return 0;
}
