/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSSavedPassword, NSString;

@interface SFPasswordCellData : NSObject {

	BOOL _isWeakPassword;
	BOOL _isReusedPassword;
	WBSSavedPassword* _savedPassword;

}

@property (nonatomic,readonly) WBSSavedPassword * savedPassword;              //@synthesize savedPassword=_savedPassword - In the implementation block
@property (assign,nonatomic) BOOL isWeakPassword;                             //@synthesize isWeakPassword=_isWeakPassword - In the implementation block
@property (assign,nonatomic) BOOL isReusedPassword;                           //@synthesize isReusedPassword=_isReusedPassword - In the implementation block
@property (nonatomic,copy,readonly) NSString * highLevelDomain; 
+(id)passwordCellDataWithSavedPassword:(id)arg1 ;
-(id)initWithSavedPassword:(id)arg1 ;
-(NSString *)highLevelDomain;
-(WBSSavedPassword *)savedPassword;
-(BOOL)isWeakPassword;
-(void)setIsWeakPassword:(BOOL)arg1 ;
-(BOOL)isReusedPassword;
-(void)setIsReusedPassword:(BOOL)arg1 ;
@end
