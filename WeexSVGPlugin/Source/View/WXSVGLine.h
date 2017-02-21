//
//  WXSVGLine.h
//  Pods
//
//  Created by yangshengtao on 17/2/17.
//
//

#import <WeexSDK/WeexSDK.h>
#import "WXSVGRenderable.h"

@interface WXSVGLine : WXSVGRenderable

@property (nonatomic, strong) NSString* x1;
@property (nonatomic, strong) NSString* y1;
@property (nonatomic, strong) NSString* x2;
@property (nonatomic, strong) NSString* y2;

@end
