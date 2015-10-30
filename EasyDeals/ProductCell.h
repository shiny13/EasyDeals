//
//  ProductCell.h
//  EasyDeals
//
//  Created by Shahnawaz Alam on 11/06/2015.
//  Copyright (c) 2015 Shahnawaz Alam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProductCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *pImage;
@property (weak, nonatomic) IBOutlet UILabel *pName;
@property (weak, nonatomic) IBOutlet UILabel *pRetailer;
@property (weak, nonatomic) IBOutlet UILabel *pPrice;
@end
