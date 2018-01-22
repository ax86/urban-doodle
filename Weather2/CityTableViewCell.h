//
//  CityTableViewCell.h
//  Weather2
//
//  Created by Aleksandr Filippov on 22.01.2018.
//  Copyright © 2018 Aleksandr Filippov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CityTableViewCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *timeLabel;
@property (nonatomic, weak) IBOutlet UILabel *cityNameLabel;
@property (nonatomic, weak) IBOutlet UILabel *temperatureLabel;

@end
