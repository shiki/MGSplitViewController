//
//  UIViewController+MGSplitViewController.h
//  MGSplitView
//
//  Created by Shiki on 2/7/12.
//

#import <UIKit/UIKit.h>

#import "MGSplitViewController.h"

@interface UIViewController (MGSplitViewController)

// Returns a MGSplitViewController ancestor of the current UIViewController. 
// This works like [UIViewController splitViewController].
@property (readonly) MGSplitViewController *mgSplitViewController;

@end
