#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import <Photos/Photos.h>
#import "HCommon.h"

@interface HDownloadMediaWithProgress : NSObject <NSURLSessionDownloadDelegate>
@property (nonatomic, retain) UIView *view;
@property (nonatomic, retain) NSURL *mediaUrl;
@property (nonatomic, retain) NSString *fileExtension;
@property (nonatomic, assign) HDownloadMediaType mediaType;
@property (nonatomic, retain) NSString *albumName;
@property (nonatomic, retain) UILabel *percentageLabel;
- (void)checkPermissionToPhotosAndDownloadURL:(NSURL *)url appendExtension:(NSString *)fileExtension mediaType:(HDownloadMediaType)mediaType toAlbum:(NSString *)albumName view:(UIView *)view;
- (void)checkPermissionToPhotosAndDownloadURL:(NSURL *)url appendExtension:(NSString *)fileExtension mediaType:(HDownloadMediaType)mediaType toAlbum:(NSString *)albumName viewController:(UIViewController *)viewController;
- (void)checkPermissionToPhotosAndDownload:(NSString *)url appendExtension:(NSString *)fileExtension mediaType:(HDownloadMediaType)mediaType toAlbum:(NSString *)albumName view:(UIView *)view;
- (void)checkPermissionToPhotosAndDownload:(NSString *)url appendExtension:(NSString *)fileExtension mediaType:(HDownloadMediaType)mediaType toAlbum:(NSString *)albumName viewController:(UIViewController *)viewController;
@end
