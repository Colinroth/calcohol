//
//  ViewController.h
//  Calcohol
//
//  Created by Colin M. Roth on 4/13/15.
//  Copyright (c) 2015 iamcolinroth. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) UITextField *beerPercentTextField;
@property (weak, nonatomic) UILabel *resultLabel;
@property (weak, nonatomic) UISlider *beerCountSlider;

-(void)buttonPressed: (UIButton *)sender;

@end

