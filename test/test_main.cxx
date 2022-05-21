#include "Captcha.h"
#include <iostream>

void test1() {
  std::vector<unsigned char> buf{};
  std::string cap{"empty"};

  try {

    int t = generateCaptcha(buf, cap);

    if (t != 0) {

      throw std::runtime_error("Error");
    }
    cv::Mat m = cv::imdecode(buf, cv::IMREAD_UNCHANGED);
    cv::imwrite("test1.png", m);

  } catch (const std::exception &ex) {
    std::cout << ex.what() << std::endl;
  }
}

int main() { test1(); }
