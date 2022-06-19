# Captcha generator
A C++ library for making captcha.

# Requirement
* opencv

```
sudo apt install libopencv-dev 
```

# How to use

```c++
#include "Captcha.h"
#include <iostream>
#include <vector>

int main(){ 
  std::vector<unsigned char> buf{};
  std::string cap{"empty"};
  
  int t = generateCaptcha(buf, cap);
  if (t != 0) {
    return -1;
  }
  // convert: buffer -> png
  cv::Mat m = cv::imdecode(buf, cv::IMREAD_UNCHANGED);
  cv::imwrite("test1.png", m);
}
```

# Build

```
mkdir build
cd build
cmake ..
make
```

# Test

```
cp libcaptcha.so test/
cd test
./test
```

