#import <UIKit/UIKit.h>
#import "OCRTextViewController.h"

@interface OCRMainViewController : UIViewController<UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIAlertViewDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (strong, nonatomic) UIAlertView *alertView;

@property (strong, nonatomic) OCRTextViewController *textViewController;

@end
