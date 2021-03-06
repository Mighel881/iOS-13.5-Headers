/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OBCapabilities : NSObject {

	BOOL _preventURLDataDetection;
	BOOL _preventOpeningSafari;

}

@property (assign,nonatomic) BOOL preventURLDataDetection;              //@synthesize preventURLDataDetection=_preventURLDataDetection - In the implementation block
@property (assign,nonatomic) BOOL preventOpeningSafari;                 //@synthesize preventOpeningSafari=_preventOpeningSafari - In the implementation block
+(id)sharedCapabilities;
-(BOOL)preventOpeningSafari;
-(BOOL)preventURLDataDetection;
-(BOOL)isWAPI;
-(void)setPreventURLDataDetection:(BOOL)arg1 ;
-(void)setPreventOpeningSafari:(BOOL)arg1 ;
@end

