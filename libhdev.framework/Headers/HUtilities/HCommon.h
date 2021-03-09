#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define IS_iPAD ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
#define IS_LANDSCAPE UIDeviceOrientationIsLandscape([UIDevice currentDevice].orientation)

typedef NS_ENUM(NSUInteger, HDownloadMediaType) {
  Image,
  Video
};

@interface NSTask : NSObject
@property (copy) NSArray *arguments;
@property (copy) NSString *currentDirectoryPath;
@property (copy) NSDictionary *environment;
@property (copy) NSString *launchPath;
@property (readonly) int processIdentifier;
@property (retain) id standardError;
@property (retain) id standardInput;
@property (retain) id standardOutput;
+ (id)currentTaskDictionary;
+ (id)launchedTaskWithDictionary:(id)arg1;
+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2;
- (id)init;
- (void)interrupt;
- (bool)isRunning;
- (void)launch;
- (bool)resume;
- (bool)suspend;
- (void)terminate;
@end

@interface HCommon : NSObject
+ (NSString *)localizedItem:(NSString *)key bundlePath:(NSString *)bundlePath;
+ (NSString *)localizedItem:(NSString *)key bundlePath:(NSString *)bundlePath table:(NSString *)table;
+ (UIColor *)colorFromHex:(NSString *)hexString;
+ (void)respring;
+ (void)killProcess:(NSString *)procName viewController:(UIViewController *)viewController alertTitle:(NSString *)alertTitle message:(NSString *)message confirmActionLabel:(NSString *)confirmActionLabel cancelActionLabel:(NSString *)cancelActionLabel;
+ (void)showAlertMessage:(NSString *)message withTitle:(NSString *)title viewController:(UIViewController *)viewController;
+ (void)showToastMessage:(NSString *)message withTitle:(NSString *)title timeout:(double)timeout viewController:(UIViewController *)viewController;
+ (BOOL)isDarkMode;
+ (BOOL)isNotch;
+ (UIWindow *)mainWindow;
@end