//
//  ImageProcessor.cpp
//  TesseractSample
//
//  Created by Bhavish on 8/16/13.
//
//

#include <iostream>
#include "ImageProcessor.h"


cv::Mat ImageProcessor::binarize(const cv::Mat&source){
    
    cv::Mat results;
    int blockDim=MIN( source.size().height/4, source.size().width/4);
    if(blockDim % 2 != 1) blockDim++;   //block has to be odd
    
    printf("%s : %d","Block dimension", blockDim);
    
    
    
    cv::adaptiveThreshold(source, results, 255, cv::ADAPTIVE_THRESH_MEAN_C,
                          cv::THRESH_BINARY,blockDim, 0);
    return results;
    
}
