//
//  DetailViewController.h
//  Notes
//
//  Created by Sarvex Jatasra on 17/04/2015.
//  Copyright (c) 2015 Sarvex Jatasra. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

