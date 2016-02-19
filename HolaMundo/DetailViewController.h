//
//  DetailViewController.h
//  HolaMundo
//
//  Created by LC on 19/02/16.
//  Copyright © 2016 LC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

