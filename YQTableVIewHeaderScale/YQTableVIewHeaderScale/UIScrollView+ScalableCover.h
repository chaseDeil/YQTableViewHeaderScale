//
//  UIScrillView+ScalableCover.h
//  YQTableVIewHeaderScale
//
//  Created by chase on 16/4/27.
//  Copyright © 2016年 chase_liu. All rights reserved.
//
#import <UIKit/UIKit.h>


static const CGFloat MaxHeight = 200;

@interface YQScalableCover : UIImageView

@property (nonatomic, strong) UIScrollView *scrollView;

@end




@interface UIScrollView (ScalableCover)

@property (nonatomic, weak) YQScalableCover *scalableCover;

- (void)addScalableCoverWithImage:(UIImage *)image;
- (void)removeScalableCover;

@end

