/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUAdLayoutOptions.h>

@protocol NUAdLayoutOptions <NSObject>
@property (nonatomic,readonly) CGSize containerSize; 
@required
-(CGSize)containerSize;

@end


@class NSString;

@interface NUAdLayoutOptions : NSObject <NUAdLayoutOptions> {

	CGSize _containerSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize containerSize;                //@synthesize containerSize=_containerSize - In the implementation block
-(id)initWithContainerSize:(CGSize)arg1 ;
-(CGSize)containerSize;
@end
