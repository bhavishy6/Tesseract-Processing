//
//  ViewController.h
//  TesseractSample
//
//  Created by Ângelo Suzuki on 11/1/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <opencv2/highgui/cap_ios.h>

@class MBProgressHUD;

namespace tesseract {
    class TessBaseAPI;
};

@interface ViewController : UIViewController<UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    MBProgressHUD *progressHud;
    UIImageView *iv;
	UILabel *label;
    tesseract::TessBaseAPI *tesseract;
    uint32_t *pixels;
}

@property (nonatomic, strong) MBProgressHUD *progressHud;

- (void)setTesseractImage:(UIImage *)image;
@property UIImage *image;
@property (nonatomic, retain) IBOutlet UIImageView *imageView;
@property (nonatomic, retain) IBOutlet UILabel *label;


@end
