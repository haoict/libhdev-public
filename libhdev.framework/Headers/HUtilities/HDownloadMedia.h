#import <Foundation/Foundation.h>
#import <Photos/Photos.h>
#import "HCommon.h"

@interface HDownloadMedia : NSObject
+ (void)checkPermissionToPhotosAndDownload:(NSString *)url appendExtension:(NSString *)fileExtension mediaType:(HDownloadMediaType)mediaType toAlbum:(NSString *)albumName;
+ (void)checkPermissionToPhotosAndDownloadURL:(NSURL *)url appendExtension:(NSString *)fileExtension mediaType:(HDownloadMediaType)mediaType toAlbum:(NSString *)albumName;
+ (void)downloadAndSaveMediaToPhotoLibrary:(NSString *)url appendExtension:(NSString *)fileExtension mediaType:(HDownloadMediaType)mediaType toAlbum:(NSString *)albumName;
@end
