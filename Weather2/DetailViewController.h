//
//  DetailViewController.h
//  Weather2
//
//  Created by Aleksandr Filippov on 22.01.2018.
//  Copyright © 2018 Aleksandr Filippov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

