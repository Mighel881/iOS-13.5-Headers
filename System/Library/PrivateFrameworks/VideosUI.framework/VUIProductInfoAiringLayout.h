/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, TVImageLayout;

@interface VUIProductInfoAiringLayout : TVViewLayout {

	VUITextLayout* _infoTextLayout;
	TVImageLayout* _logoImageLayout;

}

@property (nonatomic,readonly) VUITextLayout * infoTextLayout;               //@synthesize infoTextLayout=_infoTextLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * logoImageLayout;              //@synthesize logoImageLayout=_logoImageLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(TVImageLayout *)logoImageLayout;
-(VUITextLayout *)infoTextLayout;
@end

