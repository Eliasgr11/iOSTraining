//
//  DetailViewController.h
//  pruebaSync
//
//  Created by Elias Gonzalez on 11/02/18.
//  Copyright © 2018 Elias Gonzalez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

