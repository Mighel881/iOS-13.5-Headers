/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SVVideoGravityProviding <NSObject>
@property (nonatomic,copy,readonly) NSString * videoGravity; 
@property (nonatomic,copy,readonly) NSString * portraitVideoGravity; 
@property (nonatomic,copy,readonly) NSString * landscapeVideoGravity; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@required
-(NSString *)videoGravity;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1;
-(NSString *)portraitVideoGravity;
-(NSString *)landscapeVideoGravity;

@end

