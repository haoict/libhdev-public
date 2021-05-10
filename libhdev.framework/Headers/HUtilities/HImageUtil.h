#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "HCommon.h"

@interface HImageUtil : NSObject
+ (NSString *)encodeToBase64String:(UIImage *)image;
+ (UIImage *)decodeBase64ToImage:(NSString *)strEncodeData;
+ (NSString *)hexFromColor:(UIColor *)color;
+ (UIColor *)colorFromHex:(NSString *)hexString;
+ (UIColor *)backgroundColor:(UIImage *)image;
+ (UIColor *)primaryColor:(UIImage *)image;
+ (UIColor *)secondaryColor:(UIImage *)image;
+ (BOOL)isDarkImage:(UIImage *)image;
@end