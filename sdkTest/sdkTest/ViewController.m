//
//  ViewController.m
//  sdkTest
//
//  Created by 华云天下 on 16/11/16.
//  Copyright © 2016年 王兴隆. All rights reserved.
//

#import "ViewController.h"

#import <HuayunCallAPI/HuayunCallAPI.h>
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    
    [super viewDidLoad];
   
    [HYCall shareCall];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
