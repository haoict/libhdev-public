# libhdev
This is developer library for better preferences and useful utilities.

## How to use

### Installation:

- Download this repository put the `libhdev.framework` into your `theos/lib` folder

### Importing:

- Import the library in your header or main file `#import <libhdev/....h>`<br>
- Add the framework to your Makefile `$(TWEAK_NAME)_EXTRA_FRAMEWORKS = libhdev`<br>
- Add dependency to your tweak in your control file `Depends: mobilesubstrate, preferenceloader, com.haoict.libhdev`<br>
- Make sure the user also adds my repo (https://haoict.github.io/cydia/) to be able to download it

### Usage:

Check `libhdev.framework\Headers\...` for public headers  

For example:  
In `libhdev.framework\Headers\HUtilities\HCommon.h`, you can see the static function  

```
+ (void)showAlertMessage:(NSString *)message withTitle:(NSString *)title viewController:(UIViewController *)viewController;
```

You can call it in your code

```
#import <libhdev/HUtilities/HCommon.h>

[HCommon showAlertMessage:@"Hello, world" withTitle:@"Alert" viewController:nil];
```

More example can be found here: https://github.com/haoict/tiktok-god or https://github.com/haoict/facebook-no-ads or my other open source tweaks in the same Github