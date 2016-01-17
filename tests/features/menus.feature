@api @menus
Feature: Menu scenarios

  @midcamp-225 @main-menu
  Scenario: Main menu links
    Given I am an anonymous user
    When I am on the homepage
    Then I should see 4 "ul.menu--main-menu.menu.links li" elements
    And the "ul.menu--main-menu.menu.links li:nth-child(1)" element should contain "Sponsors"
    And the "ul.menu--main-menu.menu.links li:nth-child(2)" element should contain "Become a Sponsor"
    And the "ul.menu--main-menu.menu.links li:nth-child(3)" element should contain "Submitted Sessions"
    And the "ul.menu--main-menu.menu.links li:nth-child(4)" element should contain "2015 MidCamp"

  Scenario: User menu links
    Given I am an anonymous user
    When I am on the homepage
    Then I should see the link "Log in" in the "header_top" region

    When I am logged in as a user with the "authenticated user" role
    Then I should not see the link "Log in" in the "header_top" region
    But I should see the link "Log out" in the "header_top" region


