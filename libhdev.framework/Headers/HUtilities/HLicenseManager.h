#import <Foundation/Foundation.h>
#import <sys/utsname.h>
#import "HCommon.h"

@interface HLicenseManager : NSObject
+ (void)licenseTracker:(NSString *)licenseServer apiKey:(NSString *)apiKey plistFile:(NSString *)plistFile tweakName:(NSString *)tweakName tweakVersion:(NSString *)tweakVersion;
@end