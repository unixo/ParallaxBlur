//
//  ParallaxBlurViewController.h
//  Pods
//
//  Created by Joseph Pintozzi on 8/22/14.
//
//

#import <UIKit/UIKit.h>

@protocol JPBParallaxBlurInteractionsDelegate;

@interface JPBParallaxBlurViewController : UIViewController
@property (assign, nonatomic, readonly) CGFloat imageHeight;

- (void)setHeaderImage:(UIImage*)headerImage;
- (void)addHeaderOverlayView:(UIView*)overlay;
- (CGFloat)headerHeight;
- (UIScrollView*)mainScrollView;

@property (weak, nonatomic, readwrite) id <JPBParallaxBlurInteractionsDelegate> interactionsDelegate;

@end

///-------------------------------------------------------------------------------------------------------
/// Interactions Delegate
///-------------------------------------------------------------------------------------------------------

@protocol JPBParallaxBlurInteractionsDelegate <NSObject>

@optional

/**
 Called when the header imageview is tapped.
 */
- (void)didTapHeaderImageView:(UIImageView*)imageView;

@end
