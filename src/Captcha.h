#ifndef _CAPTCAH_GEN_
#define _CAPTCAH_GEN_

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>
#include <string>
#include <vector>

#define IMAGE_H 100
#define IMAGE_W 200
#define CAPTCHA_LEN 5

int generateCaptcha(std::vector<unsigned char> &buffer,
                    std::string &captcha_text);

#endif
