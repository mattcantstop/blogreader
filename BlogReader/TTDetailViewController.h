//
//  TTDetailViewController.h
//  BlogReader
//
//  Created by Matthew Duff on 5/13/14.
//  Copyright (c) 2014 Tiniest Time. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TTDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
