#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>

#import "../HUtilities/HCommon.h"

@interface HPSRootListController : PSListController
@property (nonatomic) NSString *tintColorHex;
@property (nonatomic) NSString *labelTextColorHex;
@property (nonatomic) NSString *subtitleTextColorHex;
@property (nonatomic) NSString *bundlePath;
@property (nonatomic) NSString *plistName;
- (NSString *)getSavedPrefPath:(PSSpecifier *)specifier;
- (NSString *)localizedItem:(NSString *)key;
@end
