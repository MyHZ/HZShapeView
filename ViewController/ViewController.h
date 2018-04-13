//
//  ViewController.h
//  HZShapeView
//
//  Created by user on 2018/4/13.
//  Copyright © 2018年 CocoaJason. All rights reserved.
//

#import <UIKit/UIKit.h>

FOUNDATION_STATIC_INLINE BOOL NSStringIsNull (NSString *string){
    return string.length == 0 ||
    [string isKindOfClass:[NSNull class]] ||
    string == nil;
}

@interface ViewController : UIViewController


@end

