/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRegularExpression, NSArray, NSString;

@interface GKRoute : NSObject {

	NSRegularExpression* _regex;
	NSArray* _parameterNames;
	NSString* _scheme;

}
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(BOOL)matchesURL:(id)arg1 ;
-(id)initWithString:(id)arg1 scheme:(id)arg2 ;
-(id)nonParameterCharacterSet;
-(BOOL)matchesURL:(id)arg1 parameters:(id*)arg2 ;
@end
