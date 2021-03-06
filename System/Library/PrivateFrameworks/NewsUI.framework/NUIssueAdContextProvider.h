/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>

@class FCIssue, NSString;

@interface NUIssueAdContextProvider : NSObject <NUAdContextProvider> {

	FCIssue* _issue;

}

@property (nonatomic,readonly) FCIssue * issue;                     //@synthesize issue=_issue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)adContextValueForKeyPath:(id)arg1 ;
-(FCIssue *)issue;
-(id)initWithIssue:(id)arg1 ;
@end

