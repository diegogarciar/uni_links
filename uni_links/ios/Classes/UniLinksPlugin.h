#import <Flutter/Flutter.h>


@protocol UriDelegate <NSObject>
- (void) foundUri:(NSString* _Nullable) uri;
@end

@interface UniLinksPlugin : NSObject <FlutterPlugin, UriDelegate>
+ (_Nullable instancetype)sharedInstance;
- (BOOL)application:(UIApplication * _Nullable)application
    continueUserActivity:(NSUserActivity * _Nullable)userActivity
      restorationHandler:(void (^_Nullable)(NSArray *_Nullable))restorationHandler;
@end
