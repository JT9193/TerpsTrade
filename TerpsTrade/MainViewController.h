//
//  MainViewController.h
//  TerpsTrade
//
//  Created by Jonathan Tseng on 10/28/14.
//  Copyright (c) 2014 JonkGames. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
#import "GlobalData.h"

@class SearchResultsTableViewCell;

@interface MainViewController : UIViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, CLLocationManagerDelegate>

@property (retain) GlobalData *globalData;

//UI Elements
@property (weak, nonatomic) IBOutlet UIButton *searchButton;
@property (weak, nonatomic) IBOutlet UIButton *createListingButton;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic, copy) NSString *titleName;
@property (nonatomic, copy) NSString *price;
@property (nonatomic, copy) NSString *author;
@property (nonatomic, copy) NSString *imageName;
@property (strong, nonatomic) IBOutlet UITextField *searchTextField;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *homeIcon;



@property (nonatomic, retain) CLLocationManager *locationManager;

//- (IBAction)showRightMenuPressed:(id)sender;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *showRightMenuPressed;


@end

