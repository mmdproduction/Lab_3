# Sorting Apartment Building

This C program is designed to sort apartment building data based on specific criteria.

## Requirements
- C compiler
- Cmake
- C99 and above

## Structure
#### META
Every META include nine fields:

| Type                    | Field name    | Descriction                                |
| ----------------------- | ------------- | ------------------------------------------ |
| char                    | name_builder  | Name of the construction company           |
| char                    | name_district | Building area name                         |
| type_t                  | type          | Type of building (Monolite, Bricks, Panel) |
| u_int<br>(unsigned int) | year_of_build | Year of building construction              |
| bool                    | is_lift       | Is there a lift in the building            |
| u_int<br>(unsigned int) | num_flat      | Number of apartments in the building       |
| u_int<br>(unsigned int) | num_floars    | Number of floors in the building           |
| float                   | averege_area  | The average room area in the building      |

##### Meta Example
> Merkezi,Bethnal,BRICKS,2022,NO,638,58,14.74

#### Container
The vector is used to support the following functions:
- Initialization
- Getting current size of the vector
- Getting data by index
- Resize vector
- Adding data in the end of vector
- Removing data from the end of vector
- Check is vector empty
-  Clearing

#### Sorting 

Order of fields:
> name_builder -> name_district -> type -> year_of_build -> is_lift -> num_flat -> num_floars -> average_area

Two types of sorting are supported:
- Buble sort
- Quick sort

## Usage

