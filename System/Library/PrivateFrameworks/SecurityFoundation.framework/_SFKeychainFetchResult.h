/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface _SFKeychainFetchResult : NSObject {

	id _keychainFetchResultInternal;

}

@property (readonly) long long resultType; 
@property (readonly) id value; 
@property (readonly) NSError * error; 
+(id)fetchResultWithValue:(id)arg1 ;
+(id)fetchResultWithError:(id)arg1 ;
-(NSError *)error;
-(id)value;
-(long long)resultType;
-(id)initWithError:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

