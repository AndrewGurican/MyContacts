//
//  Contact+CoreDataProperties.h
//  MyContacts
//
//  Created by cis290 on 10/10/16.
//  Copyright © 2016 Chuck Konkol. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Contact.h"

NS_ASSUME_NONNULL_BEGIN

@interface Contact (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *email;
@property (nullable, nonatomic, retain) NSString *fullname;
@property (nullable, nonatomic, retain) NSString *phone;

@end

NS_ASSUME_NONNULL_END
