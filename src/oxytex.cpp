#include <opencv2/opencv.hpp>
#include <textdetect/detect.hpp>
#include <tuple>


int main() {
    cv::Mat img = txdt::load_image("/tmp/test.webp");
    double target_ratio;
    std::tie(img, target_ratio) = txdt::resize_aspect_ratio(img, 1280, cv::INTER_LINEAR, 1.5);
    cv::cvtColor(img, img, cv::COLOR_RGB2BGR);
    cv::imwrite("/tmp/output.jpg", img);
    return 0;
}
