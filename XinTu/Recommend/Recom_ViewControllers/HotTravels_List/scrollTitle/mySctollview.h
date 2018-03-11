//
//  mySctollview.h
//  豆瓣1.1
//
//  Created by WillHelen on 15/6/8.
//  Copyright (c) 2015年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HotTravel.h"

@interface mySctollview : UIScrollView
- (void)setImages:(NSMutableArray *)namesArr;
@property (nonatomic, retain) UIScrollView *scroll;
@property (nonatomic, assign)NSInteger page;
@property (nonatomic,retain)NSTimer *myTimer;
@property (nonatomic,retain)HotTravel *HotTraveldic;
@property (nonatomic,retain)UIPageControl *pageControl;

@end
