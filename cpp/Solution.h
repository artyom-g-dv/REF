#ifndef SOLUTION_H_
#define SOLUTION_H_

#include <cstdint>

#include "utils/Image.h"
#include "utils/FunctionTracer.h"

class Solution {
public:
    void compute([[maybe_unused]]std::vector<StrideImage> &imageSet) {
        FunctionTracer<std::chrono::milliseconds> tracer("compute", "ms");
        for (StrideImage &image : imageSet)
            for (uint8_t &pixel : image.redPixels)
                if (pixel >= 200 ) pixel = pixel - 150;

    }
};

#endif /* SOLUTION_H_ */
