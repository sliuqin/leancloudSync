//
//  DetailViewController.h
//  leancloudSync
//
//  Created by liuqin.sheng on 2/1/15.
//  Copyright (c) 2015 peaches.io. All rights reserved.
//


#import <UIKit/UIKit.h>


@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
