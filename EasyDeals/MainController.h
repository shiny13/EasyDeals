//
//  MainController.h
//  EasyDeals
//
//  Created by Shahnawaz Alam on 11/06/2015.
//  Copyright (c) 2015 Shahnawaz Alam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainController : UITableViewController
@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *sideMenuBtn;
- (IBAction)logoutClicked:(id)sender;

@end
