/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPropertyDescription.h>
#import <libobjc.A.dylib/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNAbstractActivityAlertDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)valueClass;
-(BOOL)canUnifyValue:(id)arg1 withValue:(id)arg2 ;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNValueFromABValue:(void*)arg1 ;
-(id)CNMutableValueForABMultivalue;
@end

