/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DEEvaluator : NSObject {

	NSString* _locale;
	NSString* _typeName;
	NSString* _propName;
	id _parameters;

}

@property (nonatomic,retain) NSString * locale;                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * typeName;              //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,retain) NSString * propName;              //@synthesize propName=_propName - In the implementation block
@property (nonatomic,retain) id parameters;                    //@synthesize parameters=_parameters - In the implementation block
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(id)parameters;
-(void)setParameters:(id)arg1 ;
-(NSString *)typeName;
-(void)setTypeName:(NSString *)arg1 ;
-(id)evaluate;
-(NSString *)propName;
-(void)setPropName:(NSString *)arg1 ;
@end

