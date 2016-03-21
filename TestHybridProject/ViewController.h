//
//  ViewController.h
//  TestHybridProject
//
//  Created by OKAR OU on 16/3/21.
//  Copyright © 2016年 OKAR OU. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WebViewJavascriptBridge.h"
#import <Masonry/Masonry.h>

@interface ViewController : UIViewController <UIWebViewDelegate>

@property (nonatomic, strong) WebViewJavascriptBridge *bridge;
@property (nonatomic, strong) UIWebView *webView;

@end

