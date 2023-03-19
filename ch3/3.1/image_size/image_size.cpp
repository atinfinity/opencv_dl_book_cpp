#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

int main(int argc, char* argv[])
{
    // 画像ファイルをカラーで読み込み
    cv::Mat color_img = cv::imread("yorkie.png", cv::IMREAD_COLOR);

    // サイズ、チャンネル数などを表示する
    std::cout << "color_img" << std::endl;
    std::cout << "  size: " << color_img.size() << std::endl;
    std::cout << "  channels: " << color_img.channels() << std::endl;
    std::cout << "  depth: " << cv::depthToString(color_img.depth()) << std::endl;
    std::cout << "  type: " << cv::typeToString(color_img.type()) << std::endl << std::endl;

    // グレースケールに変換する
    cv::Mat gray_img;
    cv::cvtColor(color_img, gray_img, cv::COLOR_BGR2GRAY);

    // サイズ、チャンネル数などを表示する
    std::cout << "gray_img" << std::endl;
    std::cout << "  size: " << gray_img.size() << std::endl;
    std::cout << "  channels: " << gray_img.channels() << std::endl;
    std::cout << "  depth: " << cv::depthToString(gray_img.depth()) << std::endl;
    std::cout << "  type: " << cv::typeToString(gray_img.type()) << std::endl;

    return 0;
}
