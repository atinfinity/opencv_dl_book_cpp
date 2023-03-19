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

    // 座標値(x, y) = (200, 100)の画素値を参照（Blue、Green、Red）
    // 座標値指定がy、xの順になっている点に注意
    cv::Vec3b bgr_val = img.ptr<cv::Vec3b>(y)[x];
    std::cout << "bgr_val(" << x << ", " << y << ") = " << bgr_val << std::endl;

    // 0番目のチャンネル（＝Blue）の(x, y) = (200, 100)の画素値を参照
    // 座標値指定がy、xの順になっている点に注意
    const uint8_t b_val = img.ptr<cv::Vec3b>(y)[x][channel];
    std::cout << "b_val(" << x << ", " << y << ") = " << +b_val << std::endl;

    return 0;
}
