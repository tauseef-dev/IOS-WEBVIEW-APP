#import <UIKit/UIKit.h>


@interface WebViewController : UIViewController <UIWebViewDelegate, UIActionSheetDelegate> {

	UIWebView	*theWebView;
	NSString	*urlString;
    UIActivityIndicatorView  *whirl;

}

-(void) updateToolbar;

@property (nonatomic, retain) NSString *urlString;

@end
